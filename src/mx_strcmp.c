int mx_strcmp(const char *s1, const char *s2){
    while (*s1) {
        if(*s1 != *s2){
            if (*(const unsigned char*)s1 - *(const unsigned char*)s2 > 0) {
                return 1;
            }
            else if (*(const unsigned char*)s1 - *(const unsigned char*)s2 < 0){
                return -1;
            }
        }
        s1++;
        s2++;
    }
    return 0;
}


