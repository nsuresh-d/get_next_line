/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuresh- <nsuresh-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 09:35:50 by nsuresh-          #+#    #+#             */
/*   Updated: 2025/06/09 09:35:50 by nsuresh-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strchr(const char *str, int c)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ((char)c))
			return ((char*)&str[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char*)&str[i]);
	return (NULL);
}
char	*ft_strjoin(char const *s1, char const *s2)
{
	int	i;
	int	j;
	char	*new;

	if (!s1)
		s1 = "";
	if (!s2)
		return (NULL);
	new = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		new[i + j] = s2[j];
		j++;
	}
	new[i + j] = '\0';
	return (new);
}

char	*join_and_free(char *stash, char *buffer)
{
	char	*joined;

	joined = ft_strjoin(stash, buffer);
	free(stash);
	return (joined);
}
