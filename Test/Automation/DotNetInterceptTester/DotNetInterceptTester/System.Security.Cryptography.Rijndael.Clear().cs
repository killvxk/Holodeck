namespace DotNetInterceptTester.My_System.Security.Cryptography.Rijndael
{
public class Clear_System_Security_Cryptography_Rijndael
{
public static bool _Clear_System_Security_Cryptography_Rijndael( )
{
   //Parameters


   //Exception
   Exception exception_Real = null;
   Exception exception_Intercepted = null;

   InterceptionMaintenance.disableInterception( );

   try
   {
      returnValue_Real = System.Security.Cryptography.Rijndael.Clear();
   }

   catch( Exception e )
   {
      exception_Real = e;
   }


   InterceptionMaintenance.enableInterception( );

   try
   {
      returnValue_Intercepted = System.Security.Cryptography.Rijndael.Clear();
   }

   catch( Exception e )
   {
      exception_Intercepted = e;
   }


}
}
}
