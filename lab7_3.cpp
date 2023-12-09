//ไม่ต้องเติม function main()
using namespace std;
char before(char x){
if( x >= 66 && x <= 90){ //อ้างอิงตำแหน่งจาก ascii เมื่อใช้ char
return x-1;
}
else if(x == 65){
return 'Z';
}
else{
return '0';
}
}