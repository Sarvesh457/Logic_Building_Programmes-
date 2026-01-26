
function CountSmall(str)
{
    let iCnt = 0;
    let iCount = 0;


    for(iCnt = 0;iCnt <str.length;iCnt++)
    {
        if((str.charAt(iCnt)) >= 'a' && (str.charAt(iCnt) <='z'))
        {
            iCount++;
        }
    }
    return iCount;
}
function main()
{
    let data = "Hello";
    let Ret = 0;

    Ret = CountSmall(data);
    console.log(Ret);

}
main();