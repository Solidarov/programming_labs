import os

def move_zeroes(nums: list) -> None:
    """
    Move all zeroes to the end
    """
    i = 0
    arr_len = len(nums)
    while i < arr_len:
        if nums[i] == 0:
            del nums[i]
            nums.append(0)
            arr_len -= 1
        else:
            i += 1

if __name__ == "__main__":
    os.system("clear")
    msg = "Enter elements of array\n(each element divide by space) -> "
    nums_str = input(msg)

    nums = [int(num) for num in nums_str.split(" ") if num.isdigit()]
    
    print("\nOriginal array:", nums)

    move_zeroes(nums)

    print("\nModified array:", nums)

