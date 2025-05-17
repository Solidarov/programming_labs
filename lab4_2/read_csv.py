import pandas as pd
import os

def get_user_input(msg, type):
    while True:
        try:
            user_choice = input(msg).strip()
            if type == "str":
                return str(user_choice)
            elif type == "int":
                return int(user_choice)
            elif type == "char":
                return user_choice[0]
            else:
                raise Exception
        except ValueError:
            print("Please, provide the valid option")
        except:
            print("Something went wrong. Please try again")

def read_csv(filename: str):
    
    path_parse = filename.split(sep="/")
    print(f"\n\nContent of {path_parse[-1]}: \n")

    df = pd.read_csv(filename, delimiter=',')
    print(df)

def write_csv(filename):
    
    student = {}
    print("\nEnter the folowing values")

    msg = "\t-> Name: "
    student["Name"] = [get_user_input(msg, "str")]
    
    msg = "\t-> Age: "
    student["Age"] = [get_user_input(msg, "int")]
    
    msg = "\t-> Grade: "
    student["Grade"] = [get_user_input(msg, "char")]
    
    msg = "\t-> Email: "
    student["Email"] = [get_user_input(msg, "str")]

    df = pd.DataFrame(student)
    df.to_csv(filename, index=False, mode="a", header=False)



if __name__ == '__main__':
    filename = '/home/pablo/Documents/vcolnuft/programming_labs/lab4_2/csv/read.csv'
    write_csv(filename)
    read_csv(filename)