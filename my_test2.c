void my_strrev(char *str)
{
    int len = strlen(str);
    char *ptr = str + len;      // 末尾を指すポインタを用意
    for(int i = 0; i < len/2; ++i) {            //      len の半分の回数ループ
        char t = *--ptr;
        *ptr = *str;              //      *str++, *--ptr を交換
        *str++ = t;
    }
}