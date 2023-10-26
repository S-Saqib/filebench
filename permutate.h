void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void nextPermutation(char *str) {
    int len = strlen(str);

    int i = len - 2;
    while (i >= 0 && str[i] >= str[i + 1]) {
        i--;
    }

    if (i == -1) {
        return;  // No next permutation
    }

    int j = len - 1;
    while (str[j] <= str[i]) {
        j--;
    }

    // Swap the characters at 'i' and 'j'
    swap(&str[i], &str[j]);

    // Reverse the substring to the right of 'i'
    int left = i + 1;
    int right = len - 1;
    while (left < right) {
        swap(&str[left], &str[right]);
        left++;
        right--;
    }
}
