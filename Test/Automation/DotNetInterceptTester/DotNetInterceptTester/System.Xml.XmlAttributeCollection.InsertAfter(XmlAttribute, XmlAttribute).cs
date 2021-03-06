namespace DotNetInterceptTester.My_System.Xml.XmlAttributeCollection
{
public class InsertAfter_System_Xml_XmlAttributeCollection_System_Xml_XmlAttribute_System_Xml_XmlAttribute
{
public static bool _InsertAfter_System_Xml_XmlAttributeCollection_System_Xml_XmlAttribute_System_Xml_XmlAttribute( )
{
   //Parameters
   System.Xml.XmlAttribute newNode = null;
   System.Xml.XmlAttribute refNode = null;

   //ReturnType/Value
   System.Xml.XmlAttribute returnVal_Real = null;
   System.Xml.XmlAttribute returnVal_Intercepted = null;

   //Exception
   Exception exception_Real = null;
   Exception exception_Intercepted = null;

   InterceptionMaintenance.disableInterception( );

   try
   {
      returnValue_Real = System.Xml.XmlAttributeCollection.InsertAfter(newNode,refNode);
   }

   catch( Exception e )
   {
      exception_Real = e;
   }


   InterceptionMaintenance.enableInterception( );

   try
   {
      returnValue_Intercepted = System.Xml.XmlAttributeCollection.InsertAfter(newNode,refNode);
   }

   catch( Exception e )
   {
      exception_Intercepted = e;
   }


   Return ( ( exception_Real.Messsage == exception_Intercepted.Message ) && ( returnValue_Real == returnValue_Intercepted ) );
}
}
}
