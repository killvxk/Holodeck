namespace DotNetInterceptTester.My_System.Xml.XmlUrlResolver
{
public class ctor_System_Xml_XmlUrlResolver
{
public static bool _ctor_System_Xml_XmlUrlResolver( )
{
   //Parameters


   //Exception
   Exception exception_Real = null;
   Exception exception_Intercepted = null;

   InterceptionMaintenance.disableInterception( );

   try
   {
      returnValue_Real = System.Xml.XmlUrlResolver.ctor();
   }

   catch( Exception e )
   {
      exception_Real = e;
   }


   InterceptionMaintenance.enableInterception( );

   try
   {
      returnValue_Intercepted = System.Xml.XmlUrlResolver.ctor();
   }

   catch( Exception e )
   {
      exception_Intercepted = e;
   }


}
}
}
