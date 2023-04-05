import base64
codon = {
     0 : 'a',
     1 : 't',
     2 : 'g',
     3 : 'c'
}
def getASCII(var):
    lst = []
    for i in range(len(var)):
        lst.append(var[i])              #Deprecated
    return lst
def encodeB64(message):
    message_b = message.encode('ascii')
    base64_encoded = base64.b64encode(message_b)
    return base64_encoded
def base_convert(i, b):
    result = []
    while i > 0:
            result.insert(0, i % b)
            i = i // b
    return result
value = '''
Your mom
'''
value_encoded = encodeB64(value)
str_lst = getASCII(value_encoded)
for ite in str_lst:
    for i in base_convert(ite, 4):
        print(codon[i], end='')
    #print()