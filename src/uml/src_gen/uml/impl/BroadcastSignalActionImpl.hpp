//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_BROADCASTSIGNALACTIONBROADCASTSIGNALACTIONIMPL_HPP
#define UML_BROADCASTSIGNALACTIONBROADCASTSIGNALACTIONIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../BroadcastSignalAction.hpp"

#include "uml/impl/InvocationActionImpl.hpp"

//*********************************
namespace uml 
{
	class BroadcastSignalActionImpl :virtual public InvocationActionImpl, virtual public BroadcastSignalAction 
	{
		public: 
			BroadcastSignalActionImpl(const BroadcastSignalActionImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			BroadcastSignalActionImpl& operator=(BroadcastSignalActionImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			BroadcastSignalActionImpl();
			virtual std::shared_ptr<BroadcastSignalAction> getThisBroadcastSignalActionPtr() const;
			virtual void setThisBroadcastSignalActionPtr(std::weak_ptr<BroadcastSignalAction> thisBroadcastSignalActionPtr);

			//Additional constructors for the containments back reference
			BroadcastSignalActionImpl(std::weak_ptr<uml::Activity > par_activity);


			//Additional constructors for the containments back reference
			BroadcastSignalActionImpl(std::weak_ptr<uml::StructuredActivityNode > par_inStructuredNode);


			//Additional constructors for the containments back reference
			BroadcastSignalActionImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			BroadcastSignalActionImpl(std::weak_ptr<uml::Element > par_owner);




		public:
			//destructor
			virtual ~BroadcastSignalActionImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 A BroadcaseSignalAction may not specify onPort.
			onPort=null */ 
			virtual bool no_onport(Any diagnostics,std::map <   Any, Any >  context) ;
			
			/*!
			 The number of argument InputPins must be the same as the number of attributes in the signal.
			argument->size() = signal.allAttributes()->size() */ 
			virtual bool number_of_arguments(Any diagnostics,std::map <   Any, Any >  context) ;
			
			/*!
			 The type, ordering, and multiplicity of an argument InputPin must be the same as the corresponding attribute of the signal.
			let attribute: OrderedSet(Property) = signal.allAttributes() in
			Sequence{1..argument->size()}->forAll(i | 
				argument->at(i).type.conformsTo(attribute->at(i).type) and 
				argument->at(i).isOrdered = attribute->at(i).isOrdered and
				argument->at(i).compatibleWith(attribute->at(i))) */ 
			virtual bool type_ordering_multiplicity(Any diagnostics,std::map <   Any, Any >  context) ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The Signal whose instances are to be sent.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<uml::Signal > getSignal() const ;
			
			/*!
			 The Signal whose instances are to be sent.
			<p>From package UML::Actions.</p> */
			virtual void setSignal(std::shared_ptr<uml::Signal> _signal_signal) ;
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 ActivityGroups containing the ActivityNode.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<Union<uml::ActivityGroup>> getInGroup() const ;/*!
			 The ordered set of InputPins representing the inputs to the Action.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::InputPin, uml::Element>> getInput() const ;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const ;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const ;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<Union<uml::RedefinableElement>> getRedefinedElement() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************

			virtual std::shared_ptr<ecore::EObject> eContainer() const ; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) ;
			virtual void loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list);
			virtual void loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<uml::UmlFactory> modelFactory);
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) ;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const ;
			virtual void saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const;
			

		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
			virtual Any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, Any newValue) ;

		private:
			std::weak_ptr<BroadcastSignalAction> m_thisBroadcastSignalActionPtr;
	};
}
#endif /* end of include guard: UML_BROADCASTSIGNALACTIONBROADCASTSIGNALACTIONIMPL_HPP */
