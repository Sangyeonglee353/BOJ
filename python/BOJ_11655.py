# BOJ_11655 ROT13_카이사르 암호
import sys
input = sys.stdin.readline

key = 13
string = input().rstrip()

def ROT_13(string):
    result_lst = []
    for i in string:
        value = ord(i)
        if value > ord('A')-1 and value < ord('Z')+1:
            if(value+key) > ord('Z'):
                result_lst.append(chr(value-key))
            else:
                result_lst.append(chr(value+key))
        elif value > ord('a')-1 and value < ord('z')+1:
            if(value+key) > ord('z'):
                result_lst.append(chr(value-key))
            else:
                result_lst.append(chr(value+key))
        else:
            result_lst.append(i)
    print(''.join(result_lst))

ROT_13(string)