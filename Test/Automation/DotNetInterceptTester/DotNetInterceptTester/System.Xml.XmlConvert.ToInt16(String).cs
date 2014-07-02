namespace DotNetInterceptTester.My_System.Xml.XmlConvert
{
public class ToInt16_System_String
{
public static bool _ToInt16_System_String( )
{
   //Parameters
   System.String s = null;

   //ReturnType/Value
   System.Int16 returnVal_Real = null;
   System.Int16 returnVal_Intercepted = null;

   //Exception
   Exception exception_Real = null;
   Exception exception_Intercepted = null;

   InterceptionMaintenance.disableInterception( );

   try
   {
      returnValue_Real = System.Xml.XmlConvert.ToInt16(s);
   }

   catch( Exception e )
   {
      exception_Real = e;
   }


   InterceptionMaintenance.enableInterception( );

   try
   {
      returnValue_Intercepted = System.Xml.XmlConvert.ToInt16(s);
   }

   catch( Exception e )
   {
      exception_Intercepted = e;
   }


   Return ( ( exception_Real.Messsage == exception_Intercepted.Message ) && ( returnValue_Real == returnValue_Intercepted ) );
}
}
}
