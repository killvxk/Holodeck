namespace DotNetInterceptTester.My_System.Xml.XmlTextWriter
{
public class WriteStartElement_System_Xml_XmlTextWriter_System_String_System_String_System_String
{
public static bool _WriteStartElement_System_Xml_XmlTextWriter_System_String_System_String_System_String( )
{
   //Parameters
   System.String prefix = null;
   System.String localName = null;
   System.String ns = null;


   //Exception
   Exception exception_Real = null;
   Exception exception_Intercepted = null;

   InterceptionMaintenance.disableInterception( );

   try
   {
      returnValue_Real = System.Xml.XmlTextWriter.WriteStartElement(prefix,localName,ns);
   }

   catch( Exception e )
   {
      exception_Real = e;
   }


   InterceptionMaintenance.enableInterception( );

   try
   {
      returnValue_Intercepted = System.Xml.XmlTextWriter.WriteStartElement(prefix,localName,ns);
   }

   catch( Exception e )
   {
      exception_Intercepted = e;
   }


}
}
}
