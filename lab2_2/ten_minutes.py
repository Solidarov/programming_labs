import os

def ten_min_walk(arr_path: list) -> bool:
    """
    Function that checks if a path is a valid path 
    that takes exactly 10 minutes
    """

    if len(arr_path) != 10:
        return False
    
    x, y = 0, 0
    
    for step in arr_path:
        if step == 'n':
            y += 1
        elif step == 's':
            y -= 1
        elif step == 'e':
            x += 1
        elif step == 'w':
            x -= 1
        else:
            return False
    
    return x == 0 and y == 0

if __name__ == "__main__":
    
    os.system("clear")

    msg = "Can you walk this path: \n-> {} \nin ten minutes: {}\n"

    path_arr = ['n','s','e','w','n','s','e','w','n','s']
    print(msg.format(path_arr, ten_min_walk(path_arr)))

    path_arr = ['n','s','n','s','n','s','n','s','n','s','n','s', 'w']
    print(msg.format(path_arr, ten_min_walk(path_arr)))

    path_arr = ['n', 's']
    print(msg.format(path_arr, ten_min_walk(path_arr)))