#include "shell.h"

/**
 * aux_help_env -> help info for the builtin env
 * Return : no return
 */
void aux_help_env(void)
{
	char *help = "env: env [option] [name=value] [command [args]]\n\t";

	write(STDOUT_FILENO,help, _strlen(help));
	help = "Print the environment of the shell. \n";
	write(STDOUT_FILENO, help, _strlen(help));
}

/**
 * aux_help_setenv -> help information for the builtin
 * Return: no return
 */
void aux_help_setenv(void)
{
	char *help = "setenv: setenv (const char *name, const char *value,";

	write(STDOUT_FILENO, help, _strlen(help));
	help = "int replace)\n\t";
	write(STDOUT_FILENO, help, _strlen(help));
	help = "Add a new definition to the environment\n";
	write(STDOUT_FILENO, help, _strlen(help));
}

/**
 * aux_help_unsetenv -> help info for the builtin unsetenv
 * Return: no return
 */
void aux_help_unsetenv(void)
{
	char *help = "unsetenv: unsetenv (const char *name)\n\t";

	write(STDOUT_FILENO, help, _strlen(help));
	help = "Remove an entry completely from the environment\n";
	write(STDOUT_FILENO, help, _strlen(help));
}

/**
 * aux_help_general -> entry point for help information
 * Return: no return
 */
void aux_help_general(void)
{
	char *help = "^-^^ bash, version 1.0(1)- release\n";

