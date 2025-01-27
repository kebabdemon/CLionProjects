int printText(const char *text){
    int x = 0;
    int y;
    for(y = 0;text[y] !='\0';y++){
        if(text[y]=='0' || text[y]=='1' || text[y]=='2' || text[y]=='3' || text[y]=='4' || text[y]=='5' || text[y]=='6' || text[y]=='7' || text[y]=='8' || text[y]=='9')
        {x++;}
        else{return -1;break;}
    }
    return x;
}
int main(){
    const char *text = 'ahoj';
    printText(text);


}