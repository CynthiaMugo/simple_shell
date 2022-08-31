#include "shell.h"

/**
 * cmp_env_name - compares variables names
 * with given name
 * @name: given name
 * @nenv: variable name
 *
 * Return: 0 if not equal, another digit if equal
 */

int cmp_env_name(const char *nenv, const char *name)
{
	int i;

	for (i = 0; nenv[i] != '='; i++)
	{
		if (nenv[i] != name[i])
		{
			return (0);
		}
	}

	return (i + 1);
}

/**
 * _getenv - get an environment variable
 * @name: name of variable
 * @_environ: environment variable
 *
 * Return: value of variable or NULL
 */

char *_getenv(const char *name, char **_environ)
{
	int i, mov;
	char *ptr_env;

	ptr_env = NULL;
	mov = 0;
	/* compare environment variables */
	/* environ is declared in header file */
	for (i = 0; _environ[i]; i++)
	{
		/* if name and env are equal */
		mov = cmp_env_name(_environ[i], name);
		if (mov)
		{
			ptr_env = _environ[i];
			break;
		}
	}

	return (ptr_env + mov);
}

/**
 * _env - prints the evironment variables
 * @datash: relevant data
 *
 * Return: 1 on success
 */

int _env(data_shell *datash)
{
	int i, j;

	for (i = 0; datash->_environ[i]; i++)
	{
		for (j = 0; datash->_environ[i][j]; j++)
			;

		write(STDOUT_FILENO, datash->_environ[i], j);
		write(STDOUT_FILENO, "\n", 1);
	}
	datash->status = 0;

	return (1);
}
