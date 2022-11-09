#include <stdio.h>
#include <stdlib.h>
int strCmp(char * ,char *);

int main () {
	char *msg1 = "Anna Zhong";
	char *msg2 = "ANNA ZHONG";
	char *msg3 = "Abcd";
	
	printf("<%s> compare <%s> : %d\n", msg1, msg1, strCmp(msg1, msg1));
	printf("<%s> compare <%s> : %d\n", msg1, msg2, strCmp(msg1, msg2));
	printf("<%s> compare <%s> : %d\n", msg1, msg3, strCmp(msg1, msg3));
	
}

int strLen(const char *str) {
	unsigned int count;
	
	for(count = 0; *str != '\0'; str++, count++);
	
	return count;
}

int strCmp(char *msg1, char *msg2) {
	int i, t = 0;
	
	if(strLen(msg1) != strLen(msg2)) {
		return 1;
	}else {
		for(i = 0; msg2[i] != '\0'; i++) {
			if(msg1[i] == msg2[i]) {
				t++;
			}
		}
		if(t == strLen(msg1)) {
			return 0;
		}else {
			return 1;
		}
	}
	
}
