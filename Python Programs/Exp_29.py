#  Python Program for ShellSort.

# In shellSort, we make the array h-sorted for a large value of h. 
# We keep reducing the value of h until it becomes 1. An array is said to be h-sorted if all sublists of every h\’th element is sorted.

def shell_sort(inp,n):
    h=n//2
    while h>0:
        for i in range(h,n):
            t=inp[i]
            j=i
            while j>=h and inp[j-h]>t:
                inp[j]=inp[j-h]
                j-=h
            inp[j]=t
        h=h//2

inp=[9,8,3,7,5,6,4,1]
n=len(inp)
shell_sort(inp,n)
print('Sorted Array in Ascending Order:')
print(inp)

# Input : 
# Array before sorting:
# 9, 8, 3, 7, 5, 6, 4, 1

# Output :
# Sorted Array in Ascending Order:
# [1, 3, 4, 5, 6, 7, 8, 9]