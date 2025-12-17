/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

int ft_size(struct ListNode *head)
{
    int i = 0;
    while (head != NULL)
    {
        i++;
        head = head->next;
    }
    return (i);
}

bool isPalindrome(struct ListNode* head) {
    int tam = ft_size(head);
    int *arr = (int *)malloc(tam * sizeof(int));
    if (!arr)
        return false;
    int i = 0;
    while (head != NULL)
    {
        arr[i] = head->val;
        head = head->next;
        i++;
    }

    int *arr1 = (int *)malloc(tam * sizeof(int));
    if(!arr1)
        return false;
    i = tam - 1;
    int j = 0;
    while (i >= 0)
    {
        arr1[j] = arr[i];
        i--;
        j++;
    }
    i = 0;
    while (i < tam)
    {
        if (arr[i] != arr1[i])
            return (false);
        i++;
    }
    return (true);
}
