def find_longest_non_palindrome_subsequence(s):
    char_count = {}
    for char in s:
        if char in char_count:
            char_count[char] += 1
        else:
            char_count[char] = 1

    has_unique_char = False
    for count in char_count.values():
        if count == 1:
            has_unique_char = True
            break

    if has_unique_char:
        return len(s) - 1
    else:
        return -1


t = int(input())


for _ in range(t):

    s = input()

    result = find_longest_non_palindrome_subsequence(s)

    print(result)
