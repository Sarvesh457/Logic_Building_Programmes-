// Accept and display factro
function Factorial(no)
{
    let iFact = 1;

    while(no !=0)
    {
        iFact = iFact * no;
        no--;
    }
    return iFact;
}
function main()
{
    let iValue = 10,iRet = 0;

    iRet= Factorial(iValue);

    console.log("Factroial of :"+iRet)

}

main();