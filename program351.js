// problem on digites  

function CountDigites(no)
{
    let iCount = 0;
    let iDigit =0;

    while(no != 0)
    {
        iDigit = no%10;
        iCount++;

        no = Math.floor(no/10);                         //imp

    }
    return iCount;

}
function main()
{
    let iValue = 721;
    let iRet = 0;

    iRet = CountDigites(iValue);

    console.log(`${iValue} contains ${iRet} Digits`);

}

main();