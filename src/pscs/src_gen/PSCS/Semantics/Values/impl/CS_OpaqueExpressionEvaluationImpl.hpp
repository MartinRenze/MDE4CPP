//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef PSCS_SEMANTICS_VALUES_CS_OPAQUEEXPRESSIONEVALUATIONCS_OPAQUEEXPRESSIONEVALUATIONIMPL_HPP
#define PSCS_SEMANTICS_VALUES_CS_OPAQUEEXPRESSIONEVALUATIONCS_OPAQUEEXPRESSIONEVALUATIONIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../CS_OpaqueExpressionEvaluation.hpp"

#include "PSCS/impl/PSCSFactoryImpl.hpp"

#include "ecore/impl/EObjectImpl.hpp"

//*********************************
namespace PSCS::Semantics::Values 
{
	class CS_OpaqueExpressionEvaluationImpl :virtual public ecore::EObjectImpl,
virtual public CS_OpaqueExpressionEvaluation 
	{
		public: 
			CS_OpaqueExpressionEvaluationImpl(const CS_OpaqueExpressionEvaluationImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			CS_OpaqueExpressionEvaluationImpl& operator=(CS_OpaqueExpressionEvaluationImpl const&) = delete;

		protected:
			friend class PSCS::PSCSFactoryImpl;
			CS_OpaqueExpressionEvaluationImpl();
			virtual std::shared_ptr<CS_OpaqueExpressionEvaluation> getThisCS_OpaqueExpressionEvaluationPtr() const;
			virtual void setThisCS_OpaqueExpressionEvaluationPtr(std::weak_ptr<CS_OpaqueExpressionEvaluation> thisCS_OpaqueExpressionEvaluationPtr);



		public:
			//destructor
			virtual ~CS_OpaqueExpressionEvaluationImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual Any evaluate() ;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<Any> > executeExpressionBehavior() ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
							
			
			//*********************************
			// Union Getter
			//*********************************
			 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************

			virtual std::shared_ptr<ecore::EObject> eContainer() const ; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) ;
			virtual void loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list);
			virtual void loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<PSCS::PSCSFactory> modelFactory);
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) ;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const ;
			virtual void saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const;
			

		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
			virtual Any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, Any newValue) ;

		private:
			std::weak_ptr<CS_OpaqueExpressionEvaluation> m_thisCS_OpaqueExpressionEvaluationPtr;
	};
}
#endif /* end of include guard: PSCS_SEMANTICS_VALUES_CS_OPAQUEEXPRESSIONEVALUATIONCS_OPAQUEEXPRESSIONEVALUATIONIMPL_HPP */
