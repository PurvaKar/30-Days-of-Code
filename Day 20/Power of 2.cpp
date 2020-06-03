class Solution:
	def power(self, A):
	    if(A=="1"):
            return 0
        b=bin(int(A)).replace("0b","")
        if(b.count('1')==1 and b[0]=='1'):
            return 1
        return 0