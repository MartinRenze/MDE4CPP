//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_VARIABLE_HPP
#define UML_VARIABLE_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

#include <string>
#include <map>
#include <vector>
#include "boost/shared_ptr.hpp"
#include "boost/any.hpp"

//*********************************
// generated Includes

//Forward Declaration for used types
namespace uml 
{
	class Action;
}

namespace uml 
{
	class Activity;
}

namespace uml 
{
	class Comment;
}

namespace uml 
{
	class ConnectableElement;
}

namespace uml 
{
	class ConnectorEnd;
}

namespace uml 
{
	class Dependency;
}

namespace ecore 
{
	class EAnnotation;
}

namespace uml 
{
	class Element;
}

namespace uml 
{
	class MultiplicityElement;
}

namespace uml 
{
	class Namespace;
}

namespace uml 
{
	class StringExpression;
}

namespace uml 
{
	class StructuredActivityNode;
}

namespace uml 
{
	class TemplateParameter;
}

namespace uml 
{
	class Type;
}

namespace uml 
{
	class ValueSpecification;
}

// base class includes
#include "ConnectableElement.hpp"

#include "MultiplicityElement.hpp"

// enum includes
#include "VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 A Variable is a ConnectableElement that may store values during the execution of an Activity. Reading and writing the values of a Variable provides an alternative means for passing data than the use of ObjectFlows. A Variable may be owned directly by an Activity, in which case it is accessible from anywhere within that activity, or it may be owned by a StructuredActivityNode, in which case it is only accessible within that node.
	<p>From package UML::Activities.</p> */
	class Variable:virtual public ConnectableElement,virtual public MultiplicityElement	{
		public:
 			Variable(const Variable &) {}
			Variable& operator=(Variable const&) = delete;
	
		protected:
			Variable(){}

		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~Variable() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 A Variable is accessible by Actions within its scope (the Activity or StructuredActivityNode that owns it).
			result = (if scope<>null then scope.allOwnedNodes()->includes(a)
			else a.containingActivity()=activityScope
			endif)
			<p>From package UML::Activities.</p> */ 
			virtual bool isAccessibleBy(std::shared_ptr<uml::Action>  a)  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 An Activity that owns the Variable.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<uml::Activity> getActivityScope() const = 0;
			
			/*!
			 An Activity that owns the Variable.
			<p>From package UML::Activities.</p> */
			virtual void setActivityScope(std::shared_ptr<uml::Activity> _activityScope) = 0;
			/*!
			 A StructuredActivityNode that owns the Variable.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<uml::StructuredActivityNode> getScope() const = 0;
			
			/*!
			 A StructuredActivityNode that owns the Variable.
			<p>From package UML::Activities.</p> */
			virtual void setScope(std::shared_ptr<uml::StructuredActivityNode> _scope) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 An Activity that owns the Variable.
			<p>From package UML::Activities.</p> */
			std::shared_ptr<uml::Activity> m_activityScope;
			/*!
			 A StructuredActivityNode that owns the Variable.
			<p>From package UML::Activities.</p> */
			std::shared_ptr<uml::StructuredActivityNode> m_scope;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> getOwnedElement() const = 0;/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::Namespace> getNamespace() const = 0;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::Element> getOwner() const = 0; 
	};

}
#endif /* end of include guard: UML_VARIABLE_HPP */

