#include "shellshocked.h"

/**
 * turtle_path - Get path for turtle path
 * @environ: Environment variable
 *
 * Return: PATH value
 */
char *turtle_path(char **environ)
{
	char **env = environ;
	char *temp = NULL;
	int index = 0;

	while (env[index] != NULL)
	{
		if (strncmp(env[index], "PATH", 4) == 0)
		{
			temp = strchr(env[index], '=') + 1;
			return (temp);
		}
		index++;
	}
	return (NULL);
}
