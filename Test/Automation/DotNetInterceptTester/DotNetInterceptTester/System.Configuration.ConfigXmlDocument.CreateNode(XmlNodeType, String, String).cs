namespace DotNetInterceptTester.My_System.Configuration.ConfigXmlDocument
{
public class CreateNode_System_Configuration_ConfigXmlDocument_System_Xml_XmlNodeType_System_String_System_String
{
public static bool _CreateNode_System_Configuration_ConfigXmlDocument_System_Xml_XmlNodeType_System_String_System_String( )
{
   //Parameters
   System.Xml.XmlNodeType type = null;
   System.String name = null;
   System.String namespaceURI = null;

   //ReturnType/Value
   System.Xml.XmlNode returnVal_Real = null;
   System.Xml.XmlNode returnVal_Intercepted = null;

   //Exception
   Exception exception_Real = null;
   Exception exception_Intercepted = null;

   InterceptionMaintenance.disableInterception( );

   try
   {
      returnValue_Real = System.Configuration.ConfigXmlDocument.CreateNode(type,name,namespaceURI);
   }

   catch( Exception e )
   {
      exception_Real = e;
   }


   InterceptionMaintenance.enableInterception( );

   try
   {
      returnValue_Intercepted = System.Configuration.ConfigXmlDocument.CreateNode(type,name,namespaceURI);
   }

   catch( Exception e )
   {
      exception_Intercepted = e;
   }


   Return ( ( exception_Real.Messsage == exception_Intercepted.Message ) && ( returnValue_Real == returnValue_Intercepted ) );
}
}
}
