//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_VALUESPECIFICATION_HPP
#define UML_VALUESPECIFICATION_HPP

#include <list>
#include <memory>
#include <string>


// forward declarations
template<class T, class ... U> class Subset;



//*********************************
// generated Includes

#include <map>

namespace persistence
{
	namespace interfaces
	{
		class XLoadHandler; // used for Persistence
		class XSaveHandler; // used for Persistence
	}
}

namespace uml
{
	class UmlFactory;
}

//Forward Declaration for used types
namespace uml 
{
	class Comment;
}

namespace uml 
{
	class Dependency;
}

namespace uml 
{
	class Element;
}

namespace uml 
{
	class Namespace;
}

namespace uml 
{
	class Package;
}

namespace uml 
{
	class PackageableElement;
}

namespace uml 
{
	class Slot;
}

namespace uml 
{
	class StringExpression;
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
	class TypedElement;
}

// base class includes
#include "uml/PackageableElement.hpp"

#include "uml/TypedElement.hpp"

// enum includes
#include "uml/VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 A ValueSpecification is the specification of a (possibly empty) set of values. A ValueSpecification is a ParameterableElement that may be exposed as a formal TemplateParameter and provided as the actual parameter in the binding of a template.
	<p>From package UML::Values.</p> */
	class ValueSpecification:virtual public PackageableElement,virtual public TypedElement
	{
		public:
 			ValueSpecification(const ValueSpecification &) {}
			ValueSpecification& operator=(ValueSpecification const&) = delete;

		protected:
			ValueSpecification(){}


			//Additional constructors for the containments back reference

			ValueSpecification(std::weak_ptr<uml::Namespace > par_namespace);

			//Additional constructors for the containments back reference

			ValueSpecification(std::weak_ptr<uml::Element > par_owner);

			//Additional constructors for the containments back reference

			ValueSpecification(std::weak_ptr<uml::Package > par_owningPackage);

			//Additional constructors for the containments back reference

			ValueSpecification(std::weak_ptr<uml::Slot > par_owningSlot);

			//Additional constructors for the containments back reference

			ValueSpecification(std::weak_ptr<uml::TemplateParameter > par_owningTemplateParameter);

		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~ValueSpecification() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 The query booleanValue() gives a single Boolean value when one can be computed.
			result = (null)
			<p>From package UML::Values.</p> */ 
			virtual bool booleanValue() = 0;
			
			/*!
			 The query integerValue() gives a single Integer value when one can be computed.
			result = (null)
			<p>From package UML::Values.</p> */ 
			virtual int integerValue() = 0;
			
			/*!
			 The query isComputable() determines whether a value specification can be computed in a model. This operation cannot be fully defined in OCL. A conforming implementation is expected to deliver true for this operation for all ValueSpecifications that it can compute, and to compute all of those for which the operation is true. A conforming implementation is expected to be able to compute at least the value of all LiteralSpecifications.
			result = (false)
			<p>From package UML::Values.</p> */ 
			virtual bool isComputable() = 0;
			
			/*!
			 The query isNull() returns true when it can be computed that the value is null.
			result = (false)
			<p>From package UML::Values.</p> */ 
			virtual bool isNull() = 0;
			
			/*!
			 The query realValue() gives a single Real value when one can be computed.
			result = (null)
			<p>From package UML::Values.</p> */ 
			virtual double realValue() = 0;
			
			/*!
			 The query stringValue() gives a single String value when one can be computed.
			result = (null)
			<p>From package UML::Values.</p> */ 
			virtual std::string stringValue() = 0;
			
			/*!
			 The query unlimitedValue() gives a single UnlimitedNatural value when one can be computed.
			result = (null)
			<p>From package UML::Values.</p> */ 
			virtual int unlimitedValue() = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::weak_ptr<uml::Slot > getOwningSlot() const = 0;
			
			/*!
			 */
			virtual void setOwningSlot(std::shared_ptr<uml::Slot> _owningSlot_owningSlot) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 */
			std::weak_ptr<uml::Slot > m_owningSlot;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Namespace > getNamespace() const = 0;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const = 0;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const = 0;

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) = 0;
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) = 0;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const = 0;
			
	};

}
#endif /* end of include guard: UML_VALUESPECIFICATION_HPP */
