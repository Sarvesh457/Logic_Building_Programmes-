// problem on digites  

function SumDigites(no)
{
    let iSum = 0;
    let iDigit =0;

    while(no != 0)
    {
        iDigit = no%10;
        iSum = iSum+iDigit;
        no = Math.floor(no/10);                         //imp

    }
    return iSum;

}
function main()
{
    let iValue = 721;
    let iRet = 0;

    iRet = SumDigites(iValue);

    console.log(`Summation of digits : ${iRet}`);

}

main();