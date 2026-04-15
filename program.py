def to_upper(s):
    return s.upper()

def to_lower(s):
    return s.lower()

if __name__ == "__main__":
    text = input("Введите строку: ")
    print("Верхний регистр:", to_upper(text))
    print("Нижний регистр:", to_lower(text))
