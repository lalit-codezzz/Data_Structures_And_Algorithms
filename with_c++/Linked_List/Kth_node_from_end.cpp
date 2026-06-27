struct Node {
    int val;
    Node* next;
    Node(int v) : val(v), next(nullptr) {}
};

Node *kthFromEnd(Node *head, int k)
{
    Node *slow = head;
    Node *fast = head;

    for (int i = 1; i <= k; ++i)
    {
        fast = fast->next;
    }

    while (fast != NULL)
    {

        slow = slow->next;
        fast = fast->next;
    }

    return slow;
}