import sys, hashlib

#text = "The quick brown fox jumped over the lazy dog's back"
#print (hashlib.md5("The quick brown fox jumped over the lazy dog's back").hexdigest())
#h = hashlib.md5(text.encode('utf-8')).hexdigest()
#print(h)

def getHash(msg):
    return hashlib.md5(msg.encode('utf-8')).hexdigest()


if __name__ == "__main__":
    if len(sys.argv) > 1:
        protocol = sys.argv[1]
        print(getHash(protocol))

#print (len(sys.argv))

