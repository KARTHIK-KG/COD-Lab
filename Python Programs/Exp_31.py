#  Python Program for Merge Sort.

# Merge Sort is a Divide and Conquer algorithm. It divides input array in two halves, calls itself for the two halves and then merges the two sorted halves. The merge() function is used for merging two halves. The merge(arr, l, m, r) is key process that assumes that arr[l..m] and arr[m+1..r] are sorted and merges the two sorted sub-arrays into one. 

def Merge_Sort(array):
    if len(array)>1:
        mid=len(array)//2
        Left=array[:mid]
        Right=array[mid:]
        Merge_Sort(Left)
        Merge_Sort(Right)
        i=j=k=0
        while i<len(Left) and j<len(Right):
            if Left[i]<Right[j]:
                array[k]=Left[i]
                i+=1
            else:
                array[k]=Right[j]
                j+=1
            k+=1
        while i < len(Left):
            array[k] = Left[i]
            i += 1
            k += 1
        while j < len(Right):
            array[k] = Right[j]
            j += 1
            k += 1
def printarray(array):
    for i in range(len(array)):
        print(array[i], end=" ")
    print()
if __name__ == '__main__':
    array = [12, 11, 13, 5, 6, 7]
    Merge_Sort(array)
    print("Sorted array is: ")
    printarray(array)

# Input : [12, 11, 13, 5, 6, 7]

# Output : 
# Sorted array is:
# 5 6 7 11 12 13