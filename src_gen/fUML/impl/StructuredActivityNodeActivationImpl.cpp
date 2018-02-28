#include "fUML/impl/StructuredActivityNodeActivationImpl.hpp"

#ifdef NDEBUG
	#define DEBUG_MESSAGE(a) /**/
#else
	#define DEBUG_MESSAGE(a) a
#endif

#ifdef ACTIVITY_DEBUG_ON
    #define ACT_DEBUG(a) a
#else
    #define ACT_DEBUG(a) /**/
#endif

//#include "util/ProfileCallCount.hpp"

#include <cassert>
#include <iostream>

#include "abstractDataTypes/Bag.hpp"
#include "abstractDataTypes/Subset.hpp"
#include "abstractDataTypes/Union.hpp"
#include "abstractDataTypes/SubsetUnion.hpp"
#include "ecore/EAnnotation.hpp"
#include "ecore/EClass.hpp"
#include "fUML/impl/FUMLPackageImpl.hpp"
#include "fuml/FUMLFactory.hpp"
#include "fuml/ObjectToken.hpp"
#include "uml/StructuredActivityNode.hpp"
#include "uml/Action.hpp"
#include "uml/ActivityNode.hpp"
#include "uml/InputPin.hpp"
#include "uml/OutputPin.hpp"

//Forward declaration includes
#include "fUML/ActionActivation.hpp"

#include "fUML/ActivityEdgeInstance.hpp"

#include "uml/ActivityNode.hpp"

#include "fUML/ActivityNodeActivation.hpp"

#include "fUML/ActivityNodeActivationGroup.hpp"

#include "uml/ExecutableNode.hpp"

#include "fUML/InputPinActivation.hpp"

#include "uml/OutputPin.hpp"

#include "fUML/OutputPinActivation.hpp"

#include "fUML/PinActivation.hpp"

#include "fUML/Token.hpp"

#include "fUML/Value.hpp"


using namespace fUML;

//*********************************
// Constructor / Destructor
//*********************************
StructuredActivityNodeActivationImpl::StructuredActivityNodeActivationImpl()
{
	//*********************************
	// Attribute Members
	//*********************************

	//*********************************
	// Reference Members
	//*********************************
	//References
	

	//Init references
	
}

StructuredActivityNodeActivationImpl::~StructuredActivityNodeActivationImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete StructuredActivityNodeActivation "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}


//Additional constructor for the containments back reference
			StructuredActivityNodeActivationImpl::StructuredActivityNodeActivationImpl(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group)
			:StructuredActivityNodeActivationImpl()
			{
			    m_group = par_group;
			}






StructuredActivityNodeActivationImpl::StructuredActivityNodeActivationImpl(const StructuredActivityNodeActivationImpl & obj):StructuredActivityNodeActivationImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy StructuredActivityNodeActivation "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif
	m_firing = obj.isFiring();
	m_running = obj.isRunning();

	//copy references with no containment (soft copy)
	
	m_group  = obj.getGroup();

	std::shared_ptr<Bag<fUML::ActivityEdgeInstance>> _incomingEdges = obj.getIncomingEdges();
	m_incomingEdges.reset(new Bag<fUML::ActivityEdgeInstance>(*(obj.getIncomingEdges().get())));

	m_node  = obj.getNode();

	std::shared_ptr<Bag<fUML::ActivityEdgeInstance>> _outgoingEdges = obj.getOutgoingEdges();
	m_outgoingEdges.reset(new Bag<fUML::ActivityEdgeInstance>(*(obj.getOutgoingEdges().get())));

	std::shared_ptr<Union<fUML::PinActivation>> _pinActivation = obj.getPinActivation();
	m_pinActivation.reset(new Union<fUML::PinActivation>(*(obj.getPinActivation().get())));


	//Clone references with containment (deep copy)

	if(obj.getActivationGroup()!=nullptr)
	{
		m_activationGroup = std::dynamic_pointer_cast<fUML::ActivityNodeActivationGroup>(obj.getActivationGroup()->copy());
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_activationGroup" << std::endl;
	#endif
	std::shared_ptr<Bag<fUML::Token>> _heldTokensList = obj.getHeldTokens();
	for(std::shared_ptr<fUML::Token> _heldTokens : *_heldTokensList)
	{
		this->getHeldTokens()->add(std::shared_ptr<fUML::Token>(std::dynamic_pointer_cast<fUML::Token>(_heldTokens->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_heldTokens" << std::endl;
	#endif
	std::shared_ptr<Bag<fUML::InputPinActivation>> _inputPinActivationList = obj.getInputPinActivation();
	for(std::shared_ptr<fUML::InputPinActivation> _inputPinActivation : *_inputPinActivationList)
	{
		this->getInputPinActivation()->add(std::shared_ptr<fUML::InputPinActivation>(std::dynamic_pointer_cast<fUML::InputPinActivation>(_inputPinActivation->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_inputPinActivation" << std::endl;
	#endif
	std::shared_ptr<Bag<fUML::OutputPinActivation>> _outputPinActivationList = obj.getOutputPinActivation();
	for(std::shared_ptr<fUML::OutputPinActivation> _outputPinActivation : *_outputPinActivationList)
	{
		this->getOutputPinActivation()->add(std::shared_ptr<fUML::OutputPinActivation>(std::dynamic_pointer_cast<fUML::OutputPinActivation>(_outputPinActivation->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_outputPinActivation" << std::endl;
	#endif

	
}

std::shared_ptr<ecore::EObject>  StructuredActivityNodeActivationImpl::copy() const
{
	std::shared_ptr<ecore::EObject> element(new StructuredActivityNodeActivationImpl(*this));
	return element;
}

std::shared_ptr<ecore::EClass> StructuredActivityNodeActivationImpl::eStaticClass() const
{
	return FUMLPackageImpl::eInstance()->getStructuredActivityNodeActivation_EClass();
}

//*********************************
// Attribute Setter Getter
//*********************************

//*********************************
// Operations
//*********************************
std::shared_ptr<Bag<fUML::Token> > StructuredActivityNodeActivationImpl::completeAction() 
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	std::shared_ptr<Bag<fUML::Token> > incomingTokens(new Bag<fUML::Token>());
    if (!this->isSuspended()) 
    {
        incomingTokens = ActionActivationImpl::completeAction();
    }
    return incomingTokens;
	//end of body
}

void StructuredActivityNodeActivationImpl::createEdgeInstances() 
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	std::shared_ptr<Bag<uml::ActivityEdge> > edges = (std::dynamic_pointer_cast<uml::StructuredActivityNode> (this->getNode()))->getEdge();
	this->getActivationGroup()->createEdgeInstance(edges);
	//end of body
}

void StructuredActivityNodeActivationImpl::createNodeActivations() 
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	ActionActivationImpl::createNodeActivations();

	this->setActivationGroup(std::shared_ptr<fUML::ActivityNodeActivationGroup>(fUML::FUMLFactory::eInstance()->createActivityNodeActivationGroup()));
	this->getActivationGroup()->setContainingNodeActivation(getThisStructuredActivityNodeActivationPtr());

	std::shared_ptr<uml::StructuredActivityNode> structuredActivityNode = std::dynamic_pointer_cast<uml::StructuredActivityNode> (this->getNode());
	std::shared_ptr<Bag<uml::ActivityNode> > nodes = structuredActivityNode->getNode();
	this->getActivationGroup()->createNodeActivations(nodes);
	//end of body
}

void StructuredActivityNodeActivationImpl::doAction() 
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	if ((std::dynamic_pointer_cast<uml::StructuredActivityNode>(this->getNode()))->getMustIsolate()) 
	{
        _beginIsolation();
        this->doStructuredActivity();
        _endIsolation();
    }
	else 
	{
        this->doStructuredActivity();
    }
	//end of body
}

void StructuredActivityNodeActivationImpl::doStructuredActivity() 
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	//Remark: action is not used in the specification.
	std::shared_ptr<uml::Action> action = std::dynamic_pointer_cast<uml::Action>(this->getNode());
    assert(action != nullptr);

    // *** Concurrently send offers from all input pins. ***
    std::shared_ptr<Bag<uml::InputPin> > inputPins = nullptr;//action->input;
    std::vector<std::shared_ptr<uml::InputPin>>::iterator i;

    for (i = inputPins->begin(); i!= inputPins->end();++i)
    {
    	std::shared_ptr<uml::InputPin> inputPin = std::dynamic_pointer_cast<uml::InputPin> (*i);
    	std::shared_ptr<PinActivation> pinActivation = this->retrievePinActivation(inputPin);
        pinActivation->sendUnofferedTokens();
    }

    std::shared_ptr<Bag<fUML::ActivityNodeActivation> > nodes = this->getActivationGroup()->getNodeActivations();
    this->getActivationGroup()->run(nodes);
	//end of body
}

std::shared_ptr<fUML::ActivityNodeActivation> StructuredActivityNodeActivationImpl::getNodeActivation(std::shared_ptr<uml::ActivityNode>  node) 
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	std::shared_ptr<ActivityNodeActivation> thisActivation = ActionActivationImpl::getNodeActivation(node);

	std::shared_ptr<ActivityNodeActivation> activation = nullptr;
    if (thisActivation != nullptr) 
    {
        activation = thisActivation;
    }
    else if (this->getActivationGroup() != nullptr)
    {
        activation = this->getActivationGroup()->getNodeActivation(node);
    }

    return activation;
	//end of body
}

std::shared_ptr<Bag<fUML::Value> > StructuredActivityNodeActivationImpl::getPinValues(std::shared_ptr<uml::OutputPin>  pin) 
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	std::shared_ptr<PinActivation> pinActivation = std::dynamic_pointer_cast<PinActivation>(this->getActivationGroup()->getNodeActivation(std::dynamic_pointer_cast<uml::ActivityNode>(pin)));
	std::shared_ptr<Bag<Token> > tokens = pinActivation->getTokens();

	std::shared_ptr<Bag<Value> > values(new Bag<Value>());
    for (unsigned int i = 0; i < tokens->size(); i++) 
    {
    	std::shared_ptr<Token> token = tokens->at(i);
    	std::shared_ptr<Value> value = (std::dynamic_pointer_cast<ObjectToken> (token))->getValue();
        if (value != nullptr) 
        {
            values->push_back(value);
        }
    }

    return values;
	//end of body
}

bool StructuredActivityNodeActivationImpl::isSourceFor(std::shared_ptr<fUML::ActivityEdgeInstance>  edgeInstance) 
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	    bool isSource = ActionActivationImpl::isSourceFor(edgeInstance);
    if (!isSource) {
        isSource = this->getActivationGroup()->hasSourceFor(edgeInstance);
    }
    return isSource;
	//end of body
}

bool StructuredActivityNodeActivationImpl::isSuspended() 
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	    return this->getActivationGroup()->isSuspended();
	//end of body
}

std::shared_ptr<Bag<uml::ActivityNode> > StructuredActivityNodeActivationImpl::makeActivityNodeList(std::shared_ptr<Bag<uml::ExecutableNode> >  nodes) 
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	std::shared_ptr<Bag<uml::ActivityNode> > activityNodes(new Bag<uml::ActivityNode>());

    for (unsigned int i = 0; i < nodes->size(); i++) 
    {
    	std::shared_ptr<uml::ActivityNode> node = nodes->at(i);
        activityNodes->push_back(node);
        std::shared_ptr<uml::Action> action = std::dynamic_pointer_cast<uml::Action>(node);
        if (action != nullptr) 
        {
        	std::shared_ptr<Bag<uml::InputPin> > inputPins = action->getInput();//was: nullptr;
            for (unsigned int j = 0; j < inputPins->size(); j++) 
            {
            	std::shared_ptr<uml::InputPin> inputPin = inputPins->at(j);
                activityNodes->push_back(inputPin);
            }

            std::shared_ptr<Bag<uml::OutputPin> > outputPins = action->getOutput();//was: nullptr;
            for (unsigned int j = 0; j < outputPins->size(); j++) 
            {
            	std::shared_ptr<uml::OutputPin> outputPin = outputPins->at(j);
                activityNodes->push_back(std::dynamic_pointer_cast<uml::ActivityNode>(outputPin));
            }
        }
    }

    return activityNodes;
	//end of body
}

void StructuredActivityNodeActivationImpl::putPinValues(std::shared_ptr<uml::OutputPin>  pin,std::shared_ptr<Bag<fUML::Value> >  values) 
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	std::shared_ptr<PinActivation> pinActivation = std::dynamic_pointer_cast<PinActivation>(this->getActivationGroup()->getNodeActivation(std::dynamic_pointer_cast<uml::ActivityNode>(pin)));

    for (unsigned int i = 0; i < values->size(); i++) 
    {
    	std::shared_ptr<Value> value = values->at(i);
    	std::shared_ptr<ObjectToken> token = fUML::FUMLFactory::eInstance()->createObjectToken();
        token->setValue(value);
        pinActivation->addToken(token);
    }
	//end of body
}

void StructuredActivityNodeActivationImpl::resume() 
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	std::shared_ptr<Bag<fUML::Token> > incomingTokens = ActionActivationImpl::completeAction();
    if (incomingTokens->size() > 0) 
    {
        this->fire(incomingTokens);
    }
    if (!this->isSuspended()) 
    {
        ActionActivationImpl::resume();
    }
	//end of body
}

void StructuredActivityNodeActivationImpl::terminate() 
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	    this->terminateAll();
    ActionActivationImpl::terminate();
	//end of body
}

void StructuredActivityNodeActivationImpl::terminateAll() 
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	    this->getActivationGroup()->terminateAll();
	//end of body
}

//*********************************
// References
//*********************************
std::shared_ptr<fUML::ActivityNodeActivationGroup > StructuredActivityNodeActivationImpl::getActivationGroup() const
{
//assert(m_activationGroup);
    return m_activationGroup;
}
void StructuredActivityNodeActivationImpl::setActivationGroup(std::shared_ptr<fUML::ActivityNodeActivationGroup> _activationGroup)
{
    m_activationGroup = _activationGroup;
}

//*********************************
// Union Getter
//*********************************
std::shared_ptr<Union<fUML::PinActivation>> StructuredActivityNodeActivationImpl::getPinActivation() const
{
	return m_pinActivation;
}


std::shared_ptr<StructuredActivityNodeActivation> StructuredActivityNodeActivationImpl::getThisStructuredActivityNodeActivationPtr()
{
	if(auto wp = m_group.lock())
	{
		std::shared_ptr<Bag<fUML::ActivityNodeActivation>> ownersStructuredActivityNodeActivationList = wp->getNodeActivations();
		for (std::shared_ptr<fUML::ActivityNodeActivation> anStructuredActivityNodeActivation : *ownersStructuredActivityNodeActivationList)
		{
			if (anStructuredActivityNodeActivation.get() == this)
			{
				return std::dynamic_pointer_cast<StructuredActivityNodeActivation>(anStructuredActivityNodeActivation );
			}
		}
	}
	struct null_deleter{void operator()(void const *) const {}};
	return std::shared_ptr<StructuredActivityNodeActivation>(this, null_deleter());
}
std::shared_ptr<ecore::EObject> StructuredActivityNodeActivationImpl::eContainer() const
{
	if(auto wp = m_group.lock())
	{
		return wp;
	}
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any StructuredActivityNodeActivationImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case FUMLPackage::STRUCTUREDACTIVITYNODEACTIVATION_EREFERENCE_ACTIVATIONGROUP:
			return getActivationGroup(); //7110
		case FUMLPackage::ACTIONACTIVATION_EATTRIBUTE_FIRING:
			return isFiring(); //717
		case FUMLPackage::ACTIVITYNODEACTIVATION_EREFERENCE_GROUP:
			return getGroup(); //713
		case FUMLPackage::ACTIVITYNODEACTIVATION_EREFERENCE_HELDTOKENS:
			return getHeldTokens(); //712
		case FUMLPackage::ACTIVITYNODEACTIVATION_EREFERENCE_INCOMINGEDGES:
			return getIncomingEdges(); //711
		case FUMLPackage::ACTIONACTIVATION_EREFERENCE_INPUTPINACTIVATION:
			return getInputPinActivation(); //718
		case FUMLPackage::ACTIVITYNODEACTIVATION_EREFERENCE_NODE:
			return getNode(); //714
		case FUMLPackage::ACTIVITYNODEACTIVATION_EREFERENCE_OUTGOINGEDGES:
			return getOutgoingEdges(); //710
		case FUMLPackage::ACTIONACTIVATION_EREFERENCE_OUTPUTPINACTIVATION:
			return getOutputPinActivation(); //719
		case FUMLPackage::ACTIONACTIVATION_EREFERENCE_PINACTIVATION:
			return getPinActivation(); //716
		case FUMLPackage::ACTIVITYNODEACTIVATION_EATTRIBUTE_RUNNING:
			return isRunning(); //715
	}
	return boost::any();
}

void StructuredActivityNodeActivationImpl::eSet(int featureID, boost::any newValue)
{
	switch(featureID)
	{
		case FUMLPackage::STRUCTUREDACTIVITYNODEACTIVATION_EREFERENCE_ACTIVATIONGROUP:
		{
			// BOOST CAST
			std::shared_ptr<fUML::ActivityNodeActivationGroup> _activationGroup = boost::any_cast<std::shared_ptr<fUML::ActivityNodeActivationGroup>>(newValue);
			setActivationGroup(_activationGroup); //7110
			break;
		}
		case FUMLPackage::ACTIONACTIVATION_EATTRIBUTE_FIRING:
		{
			// BOOST CAST
			bool _firing = boost::any_cast<bool>(newValue);
			setFiring(_firing); //717
			break;
		}
		case FUMLPackage::ACTIVITYNODEACTIVATION_EREFERENCE_GROUP:
		{
			// BOOST CAST
			std::shared_ptr<fUML::ActivityNodeActivationGroup> _group = boost::any_cast<std::shared_ptr<fUML::ActivityNodeActivationGroup>>(newValue);
			setGroup(_group); //713
			break;
		}
		case FUMLPackage::ACTIVITYNODEACTIVATION_EREFERENCE_NODE:
		{
			// BOOST CAST
			std::shared_ptr<uml::ActivityNode> _node = boost::any_cast<std::shared_ptr<uml::ActivityNode>>(newValue);
			setNode(_node); //714
			break;
		}
		case FUMLPackage::ACTIVITYNODEACTIVATION_EATTRIBUTE_RUNNING:
		{
			// BOOST CAST
			bool _running = boost::any_cast<bool>(newValue);
			setRunning(_running); //715
			break;
		}
	}
}
