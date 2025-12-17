typedef	struct s_data
{
	char		data;
	struct s_data *next;
}				t_data;


void	ft_push(t_data **head, char value)
{
	t_data *new_node = (t_data *)malloc(sizeof(t_data));
	if (!new_node)
		return ;
	new_node->data = value;
	new_node->next = (*head);
	(*head) = new_node;
}


void	ft_pop(t_data **head)
{
	t_data *ptr;

	if (*head == NULL)
		return ;
	ptr = *head;
	*head = ptr->next;
	free(ptr);
}

char	ft_peek(t_data *head)
{
	if (!head)
		return (0);
	return (head->data);
}

bool isValid(char* s)
{
	t_data *lista = NULL;
	int i = 0;
	while (s[i])
	{
		if (s[i] == ')' && ft_peek(lista) == '(')
			ft_pop(&lista);
		else if (s[i] == ']' && ft_peek(lista) == '[')
			ft_pop(&lista);
		else if (s[i] == '}' && ft_peek(lista) == '{')
			ft_pop(&lista);
		else
			ft_push(&lista, s[i]);
		i++;
	}
	if (lista == NULL)
		return (true);
	else
		return (false);
}
