//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_OPERATION_HPP
#define UML_OPERATION_HPP

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
	class Behavior;
}

namespace uml 
{
	class BehavioralFeature;
}

namespace uml 
{
	class Class;
}

namespace uml 
{
	class Classifier;
}

namespace uml 
{
	class Comment;
}

namespace uml 
{
	class Constraint;
}

namespace uml 
{
	class DataType;
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
	class ElementImport;
}

namespace uml 
{
	class Interface;
}

namespace uml 
{
	class NamedElement;
}

namespace uml 
{
	class Namespace;
}

namespace uml 
{
	class Operation;
}

namespace uml 
{
	class PackageImport;
}

namespace uml 
{
	class PackageableElement;
}

namespace uml 
{
	class Parameter;
}

namespace uml 
{
	class ParameterSet;
}

namespace uml 
{
	class ParameterableElement;
}

namespace uml 
{
	class RedefinableElement;
}

namespace uml 
{
	class StringExpression;
}

namespace uml 
{
	class TemplateBinding;
}

namespace uml 
{
	class TemplateParameter;
}

namespace uml 
{
	class TemplateSignature;
}

namespace uml 
{
	class TemplateableElement;
}

namespace uml 
{
	class Type;
}

// base class includes
#include "BehavioralFeature.hpp"

#include "ParameterableElement.hpp"

#include "TemplateableElement.hpp"

// enum includes
#include "CallConcurrencyKind.hpp"

#include "VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 An Operation is a BehavioralFeature of a Classifier that specifies the name, type, parameters, and constraints for invoking an associated Behavior. An Operation may invoke both the execution of method behaviors as well as other behavioral responses. Operation specializes TemplateableElement in order to support specification of template operations and bound operations. Operation specializes ParameterableElement to specify that an operation can be exposed as a formal template parameter, and provided as an actual parameter in a binding of a template.
	<p>From package UML::Classification.</p> */
	class Operation:virtual public BehavioralFeature,virtual public ParameterableElement,virtual public TemplateableElement	{
		public:
 			Operation(const Operation &) {}
			Operation& operator=(Operation const&) = delete;
	
		protected:
			Operation(){}

		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~Operation() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 An Operation can have at most one return parameter; i.e., an owned parameter with the direction set to 'return.'
			self.ownedParameter->select(direction = ParameterDirectionKind::return)->size() <= 1 */ 
			virtual bool at_most_one_return(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 A bodyCondition can only be specified for a query Operation.
			bodyCondition <> null implies isQuery */ 
			virtual bool only_body_for_query(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 Retrieves the (only) return result parameter for this operation. */ 
			virtual std::shared_ptr<uml::Parameter>  getReturnResult()  = 0;
			
			/*!
			 */ 
			virtual void setIsOrdered(bool newIsOrdered)  = 0;
			
			/*!
			 */ 
			virtual void setIsUnique(bool newIsUnique)  = 0;
			
			/*!
			 */ 
			virtual void setLower(int newLower)  = 0;
			
			/*!
			 */ 
			virtual void setType(std::shared_ptr<uml::Type>  newType)  = 0;
			
			/*!
			 */ 
			virtual void setUpper(int newUpper)  = 0;
			
			/*!
			 If this operation has a return parameter, isOrdered equals the value of isOrdered for that parameter. Otherwise isOrdered is false.
			result = (if returnResult()->notEmpty() then returnResult()-> exists(isOrdered) else false endif)
			<p>From package UML::Classification.</p> */ 
			virtual bool isOrdered()  = 0;
			
			/*!
			 If this operation has a return parameter, isUnique equals the value of isUnique for that parameter. Otherwise isUnique is true.
			result = (if returnResult()->notEmpty() then returnResult()->exists(isUnique) else true endif)
			<p>From package UML::Classification.</p> */ 
			virtual bool isUnique()  = 0;
			
			/*!
			 If this operation has a return parameter, lower equals the value of lower for that parameter. Otherwise lower has no value.
			result = (if returnResult()->notEmpty() then returnResult()->any(true).lower else null endif)
			<p>From package UML::Classification.</p> */ 
			virtual int getLower()  = 0;
			
			/*!
			 The query returnResult() returns the set containing the return parameter of the Operation if one exists, otherwise, it returns an empty set
			result = (ownedParameter->select (direction = ParameterDirectionKind::return)->asSet())
			<p>From package UML::Classification.</p> */ 
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::Parameter>>> returnResult()  = 0;
			
			
			
			/*!
			 If this operation has a return parameter, upper equals the value of upper for that parameter. Otherwise upper has no value.
			result = (if returnResult()->notEmpty() then returnResult()->any(true).upper else null endif)
			<p>From package UML::Classification.</p> */ 
			virtual int getUpper()  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 Specifies whether the return parameter is ordered or not, if present.  This information is derived from the return result for this Operation.
			<p>From package UML::Classification.</p> */ 
			virtual bool getIsOrdered() const = 0;
			
			/*!
			 Specifies whether an execution of the BehavioralFeature leaves the state of the system unchanged (isQuery=true) or whether side effects may occur (isQuery=false).
			<p>From package UML::Classification.</p> */ 
			virtual bool getIsQuery() const = 0;
			
			/*!
			 Specifies whether an execution of the BehavioralFeature leaves the state of the system unchanged (isQuery=true) or whether side effects may occur (isQuery=false).
			<p>From package UML::Classification.</p> */ 
			virtual void setIsQuery (bool _isQuery)= 0; 
			
			/*!
			 Specifies whether the return parameter is unique or not, if present. This information is derived from the return result for this Operation.
			<p>From package UML::Classification.</p> */ 
			virtual bool getIsUnique() const = 0;
			
			/*!
			 Specifies the lower multiplicity of the return parameter, if present. This information is derived from the return result for this Operation.
			<p>From package UML::Classification.</p> */ 
			virtual int getLower() const = 0;
			
			/*!
			 The upper multiplicity of the return parameter, if present. This information is derived from the return result for this Operation.
			<p>From package UML::Classification.</p> */ 
			virtual int getUpper() const = 0;
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 An optional Constraint on the result values of an invocation of this Operation.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<uml::Constraint> getBodyCondition() const = 0;
			
			/*!
			 An optional Constraint on the result values of an invocation of this Operation.
			<p>From package UML::Classification.</p> */
			virtual void setBodyCondition(std::shared_ptr<uml::Constraint> _bodyCondition) = 0;
			/*!
			 The Class that owns this operation, if any.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<uml::Class> getClass() const = 0;
			
			/*!
			 The Class that owns this operation, if any.
			<p>From package UML::Classification.</p> */
			virtual void setClass(std::shared_ptr<uml::Class> _class) = 0;
			/*!
			 The DataType that owns this Operation, if any.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<uml::DataType> getDatatype() const = 0;
			
			/*!
			 The DataType that owns this Operation, if any.
			<p>From package UML::Classification.</p> */
			virtual void setDatatype(std::shared_ptr<uml::DataType> _datatype) = 0;
			/*!
			 The Interface that owns this Operation, if any.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<uml::Interface> getInterface() const = 0;
			
			/*!
			 The Interface that owns this Operation, if any.
			<p>From package UML::Classification.</p> */
			virtual void setInterface(std::shared_ptr<uml::Interface> _interface) = 0;
			/*!
			 An optional set of Constraints specifying the state of the system when the Operation is completed.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::Constraint>>> getPostcondition() const = 0;
			
			/*!
			 An optional set of Constraints on the state of the system when the Operation is invoked.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::Constraint>>> getPrecondition() const = 0;
			
			/*!
			 The Operations that are redefined by this Operation.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::Operation>>> getRedefinedOperation() const = 0;
			
			/*!
			 The return type of the operation, if present. This information is derived from the return result for this Operation.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<uml::Type> getType() const = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			/*!
			 Specifies whether the return parameter is ordered or not, if present.  This information is derived from the return result for this Operation.
			<p>From package UML::Classification.</p> */ 
			bool m_isOrdered ;
			/*!
			 Specifies whether an execution of the BehavioralFeature leaves the state of the system unchanged (isQuery=true) or whether side effects may occur (isQuery=false).
			<p>From package UML::Classification.</p> */ 
			bool m_isQuery =  false;
			/*!
			 Specifies whether the return parameter is unique or not, if present. This information is derived from the return result for this Operation.
			<p>From package UML::Classification.</p> */ 
			bool m_isUnique =  true;
			/*!
			 Specifies the lower multiplicity of the return parameter, if present. This information is derived from the return result for this Operation.
			<p>From package UML::Classification.</p> */ 
			int m_lower =  1;
			/*!
			 The upper multiplicity of the return parameter, if present. This information is derived from the return result for this Operation.
			<p>From package UML::Classification.</p> */ 
			int m_upper =  1;
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 An optional Constraint on the result values of an invocation of this Operation.
			<p>From package UML::Classification.</p> */
			std::shared_ptr<uml::Constraint> m_bodyCondition;
			/*!
			 The Class that owns this operation, if any.
			<p>From package UML::Classification.</p> */
			std::shared_ptr<uml::Class> m_class;
			/*!
			 The DataType that owns this Operation, if any.
			<p>From package UML::Classification.</p> */
			std::shared_ptr<uml::DataType> m_datatype;
			/*!
			 The Interface that owns this Operation, if any.
			<p>From package UML::Classification.</p> */
			std::shared_ptr<uml::Interface> m_interface;
			/*!
			 An optional set of Constraints specifying the state of the system when the Operation is completed.
			<p>From package UML::Classification.</p> */
			std::shared_ptr<std::vector<std::shared_ptr<uml::Constraint>>> m_postcondition;
			/*!
			 An optional set of Constraints on the state of the system when the Operation is invoked.
			<p>From package UML::Classification.</p> */
			std::shared_ptr<std::vector<std::shared_ptr<uml::Constraint>>> m_precondition;
			/*!
			 The Operations that are redefined by this Operation.
			<p>From package UML::Classification.</p> */
			std::shared_ptr<std::vector<std::shared_ptr<uml::Operation>>> m_redefinedOperation;
			/*!
			 The return type of the operation, if present. This information is derived from the return result for this Operation.
			<p>From package UML::Classification.</p> */
			std::shared_ptr<uml::Type> m_type;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 A collection of NamedElements owned by the Namespace.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::NamedElement>>> getOwnedMember() const = 0;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::RedefinableElement>>> getRedefinedElement() const = 0;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> getOwnedElement() const = 0;/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::Namespace> getNamespace() const = 0;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::Element> getOwner() const = 0;/*!
			 A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::NamedElement>>> getMember() const = 0;/*!
			 The Classifiers that have this Feature as a feature.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::Classifier>>> getFeaturingClassifier() const = 0;/*!
			 The contexts that this element may be redefined from.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::Classifier>>> getRedefinitionContext() const = 0; 
	};

}
#endif /* end of include guard: UML_OPERATION_HPP */

