#  Python Program for Bubble Sort

# Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order.

def bubbleSort(array):
    for a in range(len(array)):
        for b in range(0,len(array)-a-1):
            if array[b]>array[b+1]:
                temp=array[b]
                array[b]=array[b+1]
                array[b+1]=temp
array=[-2,45,0,11,-9]
bubbleSort(array)
print('Sorted Array in Ascending Order:')
print(array)

# Input : -2, 45, 0, 11, -9

# Output : 
# Sorted Array in Ascending Order:
# [-9, -2, 0, 11, 45]