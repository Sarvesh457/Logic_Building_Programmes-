// problem on digites  

function CountDigites(no)
{
    let iCount = 0;

    while(no != 0)
    {
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