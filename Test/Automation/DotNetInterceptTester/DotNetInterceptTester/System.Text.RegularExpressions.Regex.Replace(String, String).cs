namespace DotNetInterceptTester.My_System.Text.RegularExpressions.Regex
{
public class Replace_System_Text_RegularExpressions_Regex_System_String_System_String
{
public static bool _Replace_System_Text_RegularExpressions_Regex_System_String_System_String( )
{
   //Parameters
   System.String input = null;
   System.String replacement = null;

   //ReturnType/Value
   System.String returnVal_Real = null;
   System.String returnVal_Intercepted = null;

   //Exception
   Exception exception_Real = null;
   Exception exception_Intercepted = null;

   InterceptionMaintenance.disableInterception( );

   try
   {
      returnValue_Real = System.Text.RegularExpressions.Regex.Replace(input,replacement);
   }

   catch( Exception e )
   {
      exception_Real = e;
   }


   InterceptionMaintenance.enableInterception( );

   try
   {
      returnValue_Intercepted = System.Text.RegularExpressions.Regex.Replace(input,replacement);
   }

   catch( Exception e )
   {
      exception_Intercepted = e;
   }


   Return ( ( exception_Real.Messsage == exception_Intercepted.Message ) && ( returnValue_Real == returnValue_Intercepted ) );
}
}
}
