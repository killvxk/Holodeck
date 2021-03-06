namespace DotNetInterceptTester.My_System.Security.Cryptography.HMACSHA1
{
public class Initialize_System_Security_Cryptography_HMACSHA1
{
public static bool _Initialize_System_Security_Cryptography_HMACSHA1( )
{
   //Parameters


   //Exception
   Exception exception_Real = null;
   Exception exception_Intercepted = null;

   InterceptionMaintenance.disableInterception( );

   try
   {
      returnValue_Real = System.Security.Cryptography.HMACSHA1.Initialize();
   }

   catch( Exception e )
   {
      exception_Real = e;
   }


   InterceptionMaintenance.enableInterception( );

   try
   {
      returnValue_Intercepted = System.Security.Cryptography.HMACSHA1.Initialize();
   }

   catch( Exception e )
   {
      exception_Intercepted = e;
   }


}
}
}
