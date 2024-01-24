Node *removeDuplicates(Node *head) {
    if (head == NULL) {
        return NULL;
    }

    std::map<int, bool> visited;
    Node *current = head;
    Node *prev = nullptr;

    while (current != NULL) {
        if (visited[current->data]) {
            prev->next = current->next;
            delete current;
            current = prev->next;
        } else {
            // Mark the current data as visited and move to the next node
            visited[current->data] = true;
            prev = current;
            current = current->next;
        }
    }

    return head;
}//
Node *removeDuplicates(Node *head) {
  if (head == NULL || head->next == NULL) {
    return head; // No duplicates to remove
  }

  Node *Curr = head;
  while (Curr != NULL) {
    Node *temp = Curr;
    while (temp->next != NULL) {
      if (Curr->data == temp->next->data) {
        Node *todelete = temp->next;
        temp->next = temp->next->next;
        delete todelete;
      } else {
        temp = temp->next;
      }
    }
    Curr = Curr->next;
  }

  return head;
}
