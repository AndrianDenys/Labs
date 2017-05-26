class MyExcept(Exception):
    def __init__(self):
        pass

def raise_func():
    raise KeyError("!")
    raise IndexError("!")

def except_func():
    try:
        raise_func()
        myexcept_raise_func()

    except KeyError:
        print("KeyError fixed")
    except IndexError:
        print("IndexError fixed")
    except TypeError:
        print("MyExcept error fixed")

def myexcept_raise_func():
    raise MyExcept()

except_func()