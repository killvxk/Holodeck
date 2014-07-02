namespace DotNetInterceptTester.My_System.Xml.XmlTextReader
{
public class ReadStartElement_System_Xml_XmlTextReader_System_String
{
public static bool _ReadStartElement_System_Xml_XmlTextReader_System_String( )
{
   //Parameters
   System.String name = null;


   //Exception
   Exception exception_Real = null;
   Exception exception_Intercepted = null;

   InterceptionMaintenance.disableInterception( );

   try
   {
      returnValue_Real = System.Xml.XmlTextReader.ReadStartElement(name);
   }

   catch( Exception e )
   {
      exception_Real = e;
   }


   InterceptionMaintenance.enableInterception( );

   try
   {
      returnValue_Intercepted = System.Xml.XmlTextReader.ReadStartElement(name);
   }

   catch( Exception e )
   {
      exception_Intercepted = e;
   }


}
}
}
