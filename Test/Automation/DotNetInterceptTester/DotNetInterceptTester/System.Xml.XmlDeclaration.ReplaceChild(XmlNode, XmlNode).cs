namespace DotNetInterceptTester.My_System.Xml.XmlDeclaration
{
public class ReplaceChild_System_Xml_XmlDeclaration_System_Xml_XmlNode_System_Xml_XmlNode
{
public static bool _ReplaceChild_System_Xml_XmlDeclaration_System_Xml_XmlNode_System_Xml_XmlNode( )
{
   //Parameters
   System.Xml.XmlNode newChild = null;
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
      returnValue_Real = System.Xml.XmlDeclaration.ReplaceChild(newChild,oldChild);
   }

   catch( Exception e )
   {
      exception_Real = e;
   }


   InterceptionMaintenance.enableInterception( );

   try
   {
      returnValue_Intercepted = System.Xml.XmlDeclaration.ReplaceChild(newChild,oldChild);
   }

   catch( Exception e )
   {
      exception_Intercepted = e;
   }


   Return ( ( exception_Real.Messsage == exception_Intercepted.Message ) && ( returnValue_Real == returnValue_Intercepted ) );
}
}
}
