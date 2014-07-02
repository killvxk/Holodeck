namespace DotNetInterceptTester.My_System.Xml.XmlNotation
{
public class RemoveChild_System_Xml_XmlNotation_System_Xml_XmlNode
{
public static bool _RemoveChild_System_Xml_XmlNotation_System_Xml_XmlNode( )
{
   //Parameters
   System.Xml.XmlNode oldChild = null;

   //ReturnType/Value
   System.Xml.XmlNode returnVal_Real = null;
   System.Xml.XmlNode returnVal_Intercepted = null;

   //Exception
   Exception exception_Real = null;
   Exception exception_Intercepted = null;

   InterceptionMaintenance.disableInterception( );

   try
   {
      returnValue_Real = System.Xml.XmlNotation.RemoveChild(oldChild);
   }

   catch( Exception e )
   {
      exception_Real = e;
   }


   InterceptionMaintenance.enableInterception( );

   try
   {
      returnValue_Intercepted = System.Xml.XmlNotation.RemoveChild(oldChild);
   }

   catch( Exception e )
   {
      exception_Intercepted = e;
   }


   Return ( ( exception_Real.Messsage == exception_Intercepted.Message ) && ( returnValue_Real == returnValue_Intercepted ) );
}
}
}
