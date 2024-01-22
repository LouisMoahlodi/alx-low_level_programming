def is_palindrom(n):
    #Check if number is a palindrom
    return str(n) == str(n)[::-1]

largest_pali = 0

for i in range(100, 1000):
    for j in range(100, 1000):
        product = i * j
        if is_palindrom(product) and product > largest_pali:
            largest_pali = product
            print("Largest Palindrome Product of two 3-digit numbers is", largest_pali)