namespace DotNetInterceptTester.My_System.Xml.XmlText
{
public class RemoveAll_System_Xml_XmlText
{
public static bool _RemoveAll_System_Xml_XmlText( )
{
   //Parameters


   //Exception
   Exception exception_Real = null;
   Exception exception_Intercepted = null;

   InterceptionMaintenance.disableInterception( );

   try
   {
      returnValue_Real = System.Xml.XmlText.RemoveAll();
   }

   catch( Exception e )
   {
      exception_Real = e;
   }


   InterceptionMaintenance.enableInterception( );

   try
   {
      returnValue_Intercepted = System.Xml.XmlText.RemoveAll();
   }

   catch( Exception e )
   {
      exception_Intercepted = e;
   }


}
}
}
