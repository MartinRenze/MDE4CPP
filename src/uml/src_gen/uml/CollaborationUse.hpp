//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_COLLABORATIONUSE_HPP
#define UML_COLLABORATIONUSE_HPP

#include <map>
#include <list>
#include <memory>
#include <string>


// forward declarations
template<class T, class ... U> class Subset;


class AnyObject;
typedef std::shared_ptr<AnyObject> Any;

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
	class Collaboration;
}

namespace uml 
{
	class Comment;
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
	class NamedElement;
}

namespace uml 
{
	class Namespace;
}

namespace uml 
{
	class StringExpression;
}

// base class includes
#include "uml/NamedElement.hpp"

// enum includes
#include "uml/VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 A CollaborationUse is used to specify the application of a pattern specified by a Collaboration to a specific situation.
	<p>From package UML::StructuredClassifiers.</p> */
	class CollaborationUse:virtual public NamedElement
	{
		public:
 			CollaborationUse(const CollaborationUse &) {}
			CollaborationUse& operator=(CollaborationUse const&) = delete;

		protected:
			CollaborationUse(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~CollaborationUse() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 All the client elements of a roleBinding are in one Classifier and all supplier elements of a roleBinding are in one Collaboration.
			roleBinding->collect(client)->forAll(ne1, ne2 |
			  ne1.oclIsKindOf(ConnectableElement) and ne2.oclIsKindOf(ConnectableElement) and
			    let ce1 : ConnectableElement = ne1.oclAsType(ConnectableElement), ce2 : ConnectableElement = ne2.oclAsType(ConnectableElement) in
			      ce1.structuredClassifier = ce2.structuredClassifier)
			and
			  roleBinding->collect(supplier)->forAll(ne1, ne2 |
			  ne1.oclIsKindOf(ConnectableElement) and ne2.oclIsKindOf(ConnectableElement) and
			    let ce1 : ConnectableElement = ne1.oclAsType(ConnectableElement), ce2 : ConnectableElement = ne2.oclAsType(ConnectableElement) in
			      ce1.collaboration = ce2.collaboration) */ 
			virtual bool client_elements(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			/*!
			 Connectors in a Collaboration typing a CollaborationUse must have corresponding Connectors between elements bound in the context Classifier, and these corresponding Connectors must have the same or more general type than the Collaboration Connectors.
			type.ownedConnector->forAll(connector |
			  let rolesConnectedInCollab : Set(ConnectableElement) = connector.end.role->asSet(),
			        relevantBindings : Set(Dependency) = roleBinding->select(rb | rb.supplier->intersection(rolesConnectedInCollab)->notEmpty()),
			        boundRoles : Set(ConnectableElement) = relevantBindings->collect(client.oclAsType(ConnectableElement))->asSet(),
			        contextClassifier : StructuredClassifier = boundRoles->any(true).structuredClassifier->any(true) in
			          contextClassifier.ownedConnector->exists( correspondingConnector | 
			              correspondingConnector.end.role->forAll( role | boundRoles->includes(role) )
			              and (connector.type->notEmpty() and correspondingConnector.type->notEmpty()) implies connector.type->forAll(conformsTo(correspondingConnector.type)) )
			) */ 
			virtual bool connectors(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			/*!
			 Every collaborationRole in the Collaboration is bound within the CollaborationUse.
			type.collaborationRole->forAll(role | roleBinding->exists(rb | rb.supplier->includes(role))) */ 
			virtual bool every_role(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 A mapping between features of the Collaboration and features of the owning Classifier. This mapping indicates which ConnectableElement of the Classifier plays which role(s) in the Collaboration. A ConnectableElement may be bound to multiple roles in the same CollaborationUse (that is, it may play multiple roles).
			<p>From package UML::StructuredClassifiers.</p> */
			virtual std::shared_ptr<Subset<uml::Dependency, uml::Element>> getRoleBinding() const = 0;
			
			/*!
			 The Collaboration which is used in this CollaborationUse. The Collaboration defines the cooperation between its roles which are mapped to ConnectableElements relating to the Classifier owning the CollaborationUse.
			<p>From package UML::StructuredClassifiers.</p> */
			virtual std::shared_ptr<uml::Collaboration > getType() const = 0;
			
			/*!
			 The Collaboration which is used in this CollaborationUse. The Collaboration defines the cooperation between its roles which are mapped to ConnectableElements relating to the Classifier owning the CollaborationUse.
			<p>From package UML::StructuredClassifiers.</p> */
			virtual void setType(std::shared_ptr<uml::Collaboration> _type_type) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 A mapping between features of the Collaboration and features of the owning Classifier. This mapping indicates which ConnectableElement of the Classifier plays which role(s) in the Collaboration. A ConnectableElement may be bound to multiple roles in the same CollaborationUse (that is, it may play multiple roles).
			<p>From package UML::StructuredClassifiers.</p> */
			std::shared_ptr<Subset<uml::Dependency, uml::Element>> m_roleBinding;
			/*!
			 The Collaboration which is used in this CollaborationUse. The Collaboration defines the cooperation between its roles which are mapped to ConnectableElements relating to the Classifier owning the CollaborationUse.
			<p>From package UML::StructuredClassifiers.</p> */
			std::shared_ptr<uml::Collaboration > m_type;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
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
#endif /* end of include guard: UML_COLLABORATIONUSE_HPP */
