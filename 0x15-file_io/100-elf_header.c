#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void elf_checker(unsigned char *e_ident);
void magic_printer(unsigned char *e_ident);
void e_class_printer(unsigned char *e_ident);
void e_data_printer(unsigned char *e_ident);
void prt_vers(unsigned char *e_ident);
void prt_abi(unsigned char *e_ident);
void prt_os_abi(unsigned char *e_ident);
void type_printer(unsigned int e_type, unsigned char *e_ident);
void print_e_header(unsigned long int e_entry, unsigned char *e_ident);
void close_elf_file(int elf);

/**
 * elf_checker - Check if the given data represents an ELF file.
 * @e_ident: Pointer to the ELF identification bytes.
 *
 * This function verifies if the given data matches the ELF file format.
 * If it does not match, it prints an error message and exits with status 98.
 */
void elf_checker(unsigned char *e_ident)
{
	int i;
	/* Check if the magic numbers match */
	for (i = 0; i < 4; i++)
	{
		if (e_ident[i] != 127 &&
			e_ident[i] != 'E' &&
			e_ident[i] != 'L' &&
			e_ident[i] != 'F')
		{
			/* Not an ELF file print error */
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98); /* Failure */
		}
	}
}

/**
 * magic_printer - Print the magic bytes of the ELF identification.
 * @e_ident: Pointer to the ELF identification bytes.
 * Return: Nothing.
 */
void magic_printer(unsigned char *e_ident)
{
	int i; /* Index variable for iteration */

	printf(" Magic: ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		/* Print each byte in hexadecimal format */
		printf("%02x", e_ident[i]);

		if (i == EI_NIDENT - 1)
			printf("\n"); /* Print new line character at the end */
		else
			printf(" "); /* Print space between bytes */
	}
}

/**
 * e_class_printer - Print the ELF class from the ELF identification.
 * @e_ident: Pointer to the ELF identification bytes.
 * Return: Nothing.
 */
void e_class_printer(unsigned char *e_ident)
{
	printf(" Class: ");

	switch (e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n"); /* Print "none" for ELF class none */
		break;
	case ELFCLASS32:
		printf("ELF32\n"); /* Print "ELF32" for ELF class 32-bit */
		break;
	case ELFCLASS64:
		printf("ELF64\n"); /* Print "ELF64" for ELF class 64-bit */
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]); /*Prt unknown ELF class*/
	}
}

/**
 * e_data_printer - Print the ELF data encoding from the ELF identification.
 * @e_ident: Pointer to the ELF identification bytes.
 * Return: Nothing.
 */
void e_data_printer(unsigned char *e_ident)
{
	printf(" Data: ");

	switch (e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n"); /* Print "none" for ELF data encoding none */
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n"); /*Prt 2's cmplmt lil edian*/
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_DATA]); /*Prt unknown ELF dt en*/
	}
}

/**
 * prt_vers - Print the ELF version from the ELF identification.
 * @e_ident: Pointer to the ELF identification bytes.
 * Return: Nothing.
 */
void prt_vers(unsigned char *e_ident)
{
	printf(" Version: %d",
		   e_ident[EI_VERSION]); /* Print the ELF version */

	switch (e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n"); /* Print "current" for ELF version current */
		break;
	default:
		printf("\n"); /* Print new line character at the end */
		break;
	}
}

/**
 * prt_os_abi - Print the OS/ABI from the ELF identification.
 * @e_ident: Pointer to the ELF identification bytes.
 * Return: Nothing.
 */
void prt_os_abi(unsigned char *e_ident)
{
	printf(" OS/ABI: ");

	switch (e_ident[EI_OSABI])
	{ /* Print the OS/ABI */
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default: /* Print unknown OS/ABI */
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * prt_abi - Print the ABI version from the ELF identification.
 * @e_ident: Pointer to the ELF identification bytes.
 * Return: Nothing.
 */
void prt_abi(unsigned char *e_ident)
{
	printf(" ABI Version: %d\n",
		   e_ident[EI_ABIVERSION]);
}

/**
 * type_printer - Print the ELF file type based on the e_type field.
 * @e_type: The e_type field value from the ELF header.
 * @e_ident: Pointer to the ELF identification bytes.
 * Return: nvoid.
 */
void type_printer(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf(" Type: "); /* Print the ELF file type */

	switch (e_type)
	{
	case ET_NONE: /* Print "NONE (None)" for ET_NONE */
		printf("NONE (None)\n");
		break;
	case ET_REL: /* Print "REL (Relocatable file)" for ET_REL */
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC: /* Print "EXEC (Executable file)" for ET_EXEC */
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN: /* Print "DYN (Shared object file)" for ET_DYN */
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE: /* Print "CORE (Core file)" for ET_CORE */
		printf("CORE (Core file)\n");
		break;
	default: /* Print "<unknown: value>" for unknown e_type values */
		printf("<unknown: %x>\n", e_type);
	}
}

/**
 * print_e_header - Print the entry point address from the ELF header.
 * @e_entry: The e_entry field value from the ELF header.
 * @e_ident: Pointer to the ELF identification bytes.
 * Return: void.
 */
void print_e_header(unsigned long int e_entry, unsigned char *e_ident)
{
	printf(" Entry point address: ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		/* Swap the bytes to account for big-endian */
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
				  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	/* Print the entry point address as a hexadecimal value for 32-bit ELF */
	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else /* Print entry point address as a hexadecimal value for 64-bit ELF */
		printf("%#lx\n", e_entry);
}

/**
 * close_elf_file - Close the file descriptor associated with the ELF file.
 * @elf: The file descriptor of the ELF file.
 * Return: Nothing.
 */
void close_elf_file(int elf)
{
	if (close(elf) == -1)
	{
		/* Print error message and exit with status 98 */
		dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - Entry point.
 * @argc: Is the argument count.
 * @argv: Is the argument vector.
 *
 * Return: 0 on success, 98 on failure.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int index1, index2;
	Elf64_Ehdr *head_elf;

	index1 = open(argv[1], O_RDONLY); /* Open the ELF file */
	if (index1 == -1)
	{ /* If it fails, print error message and exit with status 98 */
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	head_elf = malloc(sizeof(Elf64_Ehdr));
	if (head_elf == NULL)
	{ /* If malloc fails, print error message and exit with status 98 */
		close_elf_file(index1);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	index2 = read(index1, head_elf, sizeof(Elf64_Ehdr));
	if (index2 == -1)
	{ /* If read fails, print error message and exit with status 98 */
		free(head_elf);
		close_elf_file(index1);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	elf_checker(head_elf->e_ident);
	printf("ELF head_elf:\n");
	magic_printer(head_elf->e_ident);
	e_class_printer(head_elf->e_ident);
	e_data_printer(head_elf->e_ident);
	prt_vers(head_elf->e_ident);
	prt_os_abi(head_elf->e_ident);
	prt_abi(head_elf->e_ident);
	type_printer(head_elf->e_type, head_elf->e_ident);
	print_e_header(head_elf->e_entry, head_elf->e_ident);

	free(head_elf);
	close_elf_file(index1); /* Close the ELF file */
	return (0); /* Success */
}
